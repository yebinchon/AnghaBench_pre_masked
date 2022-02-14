
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int unit; TYPE_1__* proto; } ;
struct TYPE_11__ {int max_units; int (* test_port ) (TYPE_2__*) ;int max_mode; scalar_t__ (* probe_unit ) (TYPE_2__*) ;} ;
typedef TYPE_2__ PIA ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,char*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(PIA * VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_1;
 VAR_6 = VAR_5 + 1;

 if (VAR_5 == -1) {
  VAR_5 = 0;
  VAR_6 = VAR_0->proto->max_units;
 }

 if (!FUNC_2(VAR_0, VAR_3))
  return 0;

 if (VAR_0->proto->test_port) {
  FUNC_0(VAR_0);
  VAR_4 = VAR_0->proto->test_port(VAR_0);
  FUNC_3(VAR_0);
 } else
  VAR_4 = VAR_0->proto->max_mode;

 if (VAR_0->proto->probe_unit) {
  FUNC_0(VAR_0);
  for (VAR_0->unit = VAR_5; VAR_0->unit < VAR_6; VAR_0->unit++)
   if (VAR_0->proto->probe_unit(VAR_0)) {
    FUNC_3(VAR_0);
    if (FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3))
     return 1;
    FUNC_4(VAR_0);
    return 0;
   }
  FUNC_3(VAR_0);
  FUNC_4(VAR_0);
  return 0;
 }

 if (!FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3)) {
  FUNC_4(VAR_0);
  return 0;
 }
 return 1;

}

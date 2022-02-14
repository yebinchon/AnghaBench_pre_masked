
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_15__ {scalar_t__ points; } ;
struct TYPE_14__ {int type; } ;
typedef int Coordinate ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_8__ VAR_1 ;
 TYPE_1__* FUNC_2 (char) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 char FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static Tree FUNC_9(void) {
 Tree VAR_4 = FUNC_3(4);

 if (VAR_3 == '?') {
  Tree VAR_5, VAR_6;
  Coordinate VAR_7[2];
  if (VAR_0 > 1 && FUNC_6(VAR_4->type))
   FUNC_8("%s used in a conditional expression\n",
    FUNC_4(VAR_4));
  VAR_4 = FUNC_7(VAR_4);
  VAR_3 = FUNC_5();
  VAR_7[0] = VAR_2;
  VAR_5 = FUNC_7(FUNC_2(':'));
  VAR_7[1] = VAR_2;
  VAR_6 = FUNC_7(FUNC_9());
  if (VAR_1.points)
   {
    FUNC_0(VAR_1.points, &VAR_7[0], &VAR_5);
    FUNC_0(VAR_1.points, &VAR_7[1], &VAR_6);
   }
  VAR_4 = FUNC_1(VAR_4, VAR_5, VAR_6);
 }
 return VAR_4;
}

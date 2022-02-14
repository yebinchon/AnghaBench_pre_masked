
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int kd_threadmap ;
typedef int boolean_t ;
struct TYPE_2__ {int kdebug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(user_addr_t VAR_6, size_t *VAR_7)
{
 boolean_t VAR_8;
 size_t VAR_9;
 int VAR_10 = 0;

 FUNC_3();
 FUNC_0(VAR_7 != ((void*)0));

 VAR_8 = (VAR_3.kdebug_flags & VAR_2);
 if (!VAR_8) {
  return VAR_1;
 }

 VAR_9 = VAR_4 * sizeof(kd_threadmap);
 if (*VAR_7 < VAR_9) {
  return VAR_0;
 }

 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_9);
 if (VAR_10 == 0) {
  FUNC_2();
 }

 return VAR_10;
}

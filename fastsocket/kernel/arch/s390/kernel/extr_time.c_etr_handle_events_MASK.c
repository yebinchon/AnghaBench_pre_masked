
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_eacr {scalar_t__ e1; int p1; scalar_t__ e0; int p0; scalar_t__ sl; scalar_t__ es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static struct etr_eacr FUNC_3(struct etr_eacr VAR_12)
{
 if (FUNC_2(VAR_4, &VAR_6))
  VAR_12.es = 0;
 if (FUNC_2(VAR_3, &VAR_6))
  VAR_12.es = VAR_12.sl = 0;
 if (FUNC_2(VAR_2, &VAR_6))
  VAR_8 = VAR_10 = 0;

 if (FUNC_2(VAR_0, &VAR_6)) {
  if (VAR_12.e0)





   VAR_11 = FUNC_1();
  VAR_12.p0 = VAR_7;
  if (!VAR_12.p0)
   VAR_12.e0 = 0;
  VAR_8 = 0;
 }
 if (FUNC_2(VAR_1, &VAR_6)) {
  if (VAR_12.e1)





   VAR_11 = FUNC_1();
  VAR_12.p1 = VAR_9;
  if (!VAR_12.p1)
   VAR_12.e1 = 0;
  VAR_10 = 0;
 }
 FUNC_0(VAR_5, &VAR_6);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcall_mpp_data {scalar_t__ loan_request; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,long,long,long,long,long) ;
 long FUNC_1 (int ,int) ;
 int FUNC_2 (struct hvcall_mpp_data*) ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_7;
 struct hvcall_mpp_data VAR_8;
       signed long VAR_9, VAR_10, VAR_11;
       signed long VAR_12 = VAR_6 + VAR_2;
       signed long VAR_13 = (VAR_4 * 1024 * 1024) / VAR_1;

 VAR_7 = FUNC_2(&VAR_8);

 if (VAR_7 != VAR_0)
  return;

 VAR_10 = FUNC_1((s64)VAR_8.loan_request, VAR_1);
       VAR_11 = VAR_10 + (signed long)VAR_2;

       if (VAR_11 < 0 || VAR_12 < VAR_13)
               VAR_11 = 0;

       if (VAR_11 > VAR_5)
               VAR_11 -= VAR_5;
 else
               VAR_11 = 0;

       VAR_9 = VAR_12 - VAR_11;

       if (VAR_13 > VAR_9)
               VAR_11 = VAR_12 - VAR_13;

       if (VAR_11 < 0)
               VAR_11 = 0;

       VAR_3 = VAR_11;

 FUNC_0("delta = %ld, loaned = %lu, target = %lu, oom = %lu, totalram = %lu\n",
  VAR_10, VAR_2, VAR_3,
  VAR_5, VAR_6);
}

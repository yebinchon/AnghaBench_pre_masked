
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_7 = 0;

 FUNC_3(&VAR_6);
 if (VAR_5 == 0) {
  VAR_2 = (u32 *) FUNC_1(VAR_1);
  if (!VAR_2) {
   VAR_7 = -VAR_0;
   goto out;
  }
  VAR_3 = 0;
  VAR_7 = FUNC_2(&VAR_4);
  if (VAR_7)
   goto out_free;
  VAR_5 = 1;
 } else
  VAR_5++;
 FUNC_4(&VAR_6);
 return 0;

out_free:
 FUNC_0((unsigned long) VAR_2);
out:
 FUNC_4(&VAR_6);
 return VAR_7;
}

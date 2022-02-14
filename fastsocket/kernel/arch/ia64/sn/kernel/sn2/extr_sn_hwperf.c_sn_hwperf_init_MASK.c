
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ nasid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int,int ,int,int,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void)
{
 u64 VAR_10;
 int VAR_11;
 int VAR_12 = 0;


 FUNC_2(&VAR_6);

 if (VAR_9) {
  FUNC_3(&VAR_6);
  return VAR_12;
 }





 VAR_7 = (nasid_t) FUNC_0();





 VAR_11 = FUNC_1(VAR_7,
     (u64) VAR_2, 0,
     (u64) sizeof(u64), (u64) &VAR_10, 0, 0, ((void*)0));
 if (VAR_11 != VAR_5) {
  VAR_12 = -VAR_0;
  goto out;
 }

 if ((VAR_9 = FUNC_5(VAR_10)) == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto out;
 }
 VAR_11 = FUNC_1(VAR_7,
     VAR_3, 0, VAR_10,
     (u64) VAR_9, 0, 0, ((void*)0));
 if (VAR_11 != VAR_5) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_1(VAR_7,
     VAR_4, 0,
     sizeof(u64), (u64) &VAR_10, 0, 0, ((void*)0));
 if (VAR_11 != VAR_5) {
  VAR_12 = -VAR_0;
  goto out;
 }
 VAR_8 = (int)VAR_10;

out:
 if (VAR_12 < 0 && VAR_9) {
  FUNC_4(VAR_9);
  VAR_9 = ((void*)0);
  VAR_8 = 0;
 }
 FUNC_3(&VAR_6);
 return VAR_12;
}

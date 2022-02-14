
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (unsigned long,int,void*) ;
 int FUNC_3 () ;
 void* FUNC_4 (scalar_t__,int*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_5(void)
{
 void *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_4(VAR_1, &VAR_9);
 if (!FUNC_0(VAR_8)) {
  if (FUNC_2((unsigned long)VAR_5 |
       (unsigned long)VAR_1, VAR_9, VAR_8) >= 0) {
   VAR_7 = VAR_5;
   VAR_6 = VAR_1;
   goto out;
  }
  if (FUNC_2((unsigned long)VAR_4 |
       (unsigned long)VAR_1, VAR_9, VAR_8) >= 0) {
   VAR_7 = VAR_4;
   VAR_6 = VAR_1;
   goto out;
  }
  FUNC_3();
 }



 VAR_8 = FUNC_4(VAR_2, &VAR_9);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto fail_alloc;
 }
 if (FUNC_2((unsigned long)VAR_3 |
      (unsigned long)VAR_2, VAR_9, VAR_8) >= 0) {
  VAR_7 = VAR_3;
  VAR_6 = VAR_2;
  goto out;
 } else {
  VAR_10 = -VAR_0;
  goto fail_store;
 }
out:
 VAR_10 = 0;
fail_store:
 FUNC_3();
fail_alloc:
 return VAR_10;
}

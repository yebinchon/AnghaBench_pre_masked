
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int proc_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int ,size_t) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (void*,int) ;
 scalar_t__ FUNC_6 (int ,int,size_t*) ;

int
FUNC_7(proc_t VAR_3, user_addr_t VAR_4, uint32_t VAR_5, int32_t *VAR_6)
{
 uint32_t VAR_7 = 0;
 int VAR_8 = 0;
 void *VAR_9 = ((void*)0);
 int32_t VAR_10 = 0;

 if (VAR_4 != VAR_2) {
  VAR_7 = VAR_5 / sizeof(uint64_t);
  if (VAR_7 > VAR_1) {
   VAR_7 = VAR_1;
  }
  if (VAR_7 > 0) {
   VAR_5 = VAR_7 * sizeof(uint64_t);
   VAR_9 = FUNC_3(VAR_5);
   FUNC_1(VAR_9, VAR_5);
   FUNC_0(VAR_9 != ((void*)0));
  } else {
   VAR_5 = 0;
  }
 } else {
  VAR_5 = 0;
 }

 VAR_10 = FUNC_4(VAR_3, VAR_9, VAR_5);

 if (VAR_9) {
  size_t VAR_11;
  if (FUNC_6(VAR_10, sizeof(uint64_t), &VAR_11)) {
   VAR_8 = VAR_0;
   goto out;
  }
  if (VAR_11 > VAR_5) {
   VAR_11 = VAR_5;
  }
  VAR_8 = FUNC_2(VAR_9, VAR_4, VAR_11);
 }

out:
 *VAR_6 = VAR_10;

 if (VAR_9) {
  FUNC_5(VAR_9, VAR_5);
  VAR_9 = ((void*)0);
 }

 return VAR_8;
}

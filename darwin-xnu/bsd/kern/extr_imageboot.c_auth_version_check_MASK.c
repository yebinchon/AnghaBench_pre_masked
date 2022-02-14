
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uuid_t ;
typedef unsigned long uuid_string_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const) ;
 scalar_t__ FUNC_2 (int const,int const*,unsigned long) ;
 int const* FUNC_3 (void*,size_t,unsigned long*) ;
 int FUNC_4 (void*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_5 (unsigned long,void**,size_t*) ;
 int FUNC_6 (int const,unsigned long) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_3 = 0;
 void *VAR_4 = ((void*)0);
 size_t VAR_5 = 4*1024*1024UL;



 VAR_3 = FUNC_5(VAR_2, &VAR_4, &VAR_5);
 if (VAR_3) {
  goto out;
 }

 unsigned long VAR_6 = 0;
 const uuid_t *VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_6);
 if (VAR_7 == ((void*)0) || VAR_6 != sizeof(uuid_t)) {
  FUNC_0("invalid UUID (sz = %lu)", VAR_6);
  VAR_3 = VAR_0;
  goto out;
 }


 uuid_t VAR_8;
 VAR_3 = FUNC_1(VAR_1, VAR_8);
 if (VAR_3) {
  FUNC_0("could not find loaded libkern");
  goto out;
 }


 if (FUNC_2(VAR_8, VAR_7, VAR_6) != 0) {
  FUNC_0("UUID of running libkern does not match %s", VAR_2);

  uuid_string_t VAR_9, VAR_10;
  FUNC_6(*VAR_7, VAR_9);
  FUNC_6(VAR_8, VAR_10);
  FUNC_0("loaded libkern UUID =  %s", VAR_10);
  FUNC_0("on-disk libkern UUID = %s", VAR_9);

  VAR_3 = VAR_0;
  goto out;
 }



out:
 FUNC_4(VAR_4);
 return VAR_3;
}

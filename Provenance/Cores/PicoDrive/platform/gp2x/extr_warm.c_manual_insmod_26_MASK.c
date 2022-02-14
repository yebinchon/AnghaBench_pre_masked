
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*) ;
 unsigned long FUNC_3 (void*,int,unsigned long,int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ,int ) ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 (void*,unsigned long,char const*) ;
 void* FUNC_8 (unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(const char *VAR_3, const char *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7 = -1;
 void *VAR_8;
 FILE *VAR_9;

 VAR_9 = FUNC_1(VAR_3, "rb");
 if (VAR_9 == ((void*)0))
  return -1;

 FUNC_5(VAR_9, 0, VAR_0);
 VAR_5 = FUNC_6(VAR_9);
 FUNC_5(VAR_9, 0, VAR_1);

 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8 == ((void*)0))
  goto fail0;

 VAR_6 = FUNC_3(VAR_8, 1, VAR_5, VAR_9);
 if (VAR_6 != VAR_5) {
  FUNC_2(VAR_2, "failed to read module\n");
  goto fail1;
 }

 VAR_7 = FUNC_7(VAR_8, VAR_5, VAR_4);

fail1:
 FUNC_4(VAR_8);
fail0:
 FUNC_0(VAR_9);
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,char const*,...) ;
 int FUNC_3 (int,char const*,void*,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(int VAR_1, uint64_t VAR_2,
          uint64_t VAR_3, const char *VAR_4)
{
 uint64_t VAR_5;
 void *VAR_6;
 uint64_t VAR_7 = VAR_0;





 while (VAR_7 < VAR_2)
  VAR_7 = VAR_7 << 1;

 if (VAR_3 == 0)
  return 0;

 VAR_5 = FUNC_4(FUNC_0(VAR_1));
 if (VAR_5) {
  FUNC_2("Fpa pool %d(%s) already has %llu buffers. "
        "Skipping setup.\n",
       VAR_1, VAR_4, (unsigned long long)VAR_5);
  return 0;
 }

 VAR_6 = FUNC_1(VAR_2 * VAR_3, VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_2("Out of memory initializing fpa pool %d(%s).\n",
        VAR_1, VAR_4);
  return -1;
 }
 FUNC_3(VAR_1, VAR_4, VAR_6, VAR_2, VAR_3);
 return 0;
}

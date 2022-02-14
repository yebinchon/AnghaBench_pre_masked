
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 size_t VAR_2 ;
 unsigned char* FUNC_1 (size_t,int) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;
 int FUNC_3 (char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_4(int VAR_3, unsigned long long VAR_4, char **VAR_5, size_t *VAR_6)
{
 size_t VAR_7 = VAR_1 - (VAR_4 % VAR_1);
 unsigned char *VAR_8;
 int VAR_9;
 unsigned long long int VAR_10 = VAR_4 << 3;

 if (VAR_7 < VAR_2) VAR_7 += VAR_1;

 VAR_8 = FUNC_1(VAR_7, VAR_3);
 if (!VAR_8) return -VAR_0;

 *VAR_8 = 0x80;
 FUNC_2(VAR_8+1, 0, VAR_7 - 1);

 FUNC_0(FUNC_3("create_sha1_pad: hashed_length=%lld bits == %lld bytes\n", VAR_10, VAR_4));

 VAR_9 = VAR_7 - 1;
 while (VAR_10 != 0){
  VAR_8[VAR_9--] = VAR_10 % 0x100;
  VAR_10 >>= 8;
 }

 *VAR_5 = (char*)VAR_8;
 *VAR_6 = VAR_7;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned char* FUNC_1 (size_t,int) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;
 int FUNC_3 (char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_4(int VAR_4, unsigned long long VAR_5, char **VAR_6, size_t *VAR_7)
{
 size_t VAR_8 = VAR_1 - (VAR_5 % VAR_1);
 unsigned char *VAR_9;
 int VAR_10;
 unsigned long long int VAR_11 = VAR_5 << 3;

 if (VAR_8 < VAR_2) VAR_8 += VAR_1;

 VAR_9 = FUNC_1(VAR_8, VAR_4);
 if (!VAR_9) return -VAR_0;

 *VAR_9 = 0x80;
 FUNC_2(VAR_9+1, 0, VAR_8 - 1);

 FUNC_0(FUNC_3("create_md5_pad: hashed_length=%lld bits == %lld bytes\n", VAR_11, VAR_5));

 VAR_10 = VAR_8 - VAR_3;
 while (VAR_11 != 0){
  VAR_9[VAR_10++] = VAR_11 % 0x100;
  VAR_11 >>= 8;
 }

 *VAR_6 = (char*)VAR_9;
 *VAR_7 = VAR_8;

 return 0;
}

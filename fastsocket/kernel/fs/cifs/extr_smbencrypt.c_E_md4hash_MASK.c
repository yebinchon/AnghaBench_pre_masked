
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u16 ;


 int FUNC_0 (scalar_t__*,unsigned char const*,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(const unsigned char *VAR_0, unsigned char *VAR_1)
{
 int VAR_2;
 int VAR_3;
 __u16 VAR_4[129];


 if (VAR_0) {
  VAR_3 = FUNC_4((char *) VAR_0);
  if (VAR_3 > 128)
   VAR_3 = 128;


  FUNC_0(VAR_4, VAR_0, VAR_3);
 } else
  VAR_3 = 0;

 VAR_4[VAR_3] = 0;

 VAR_3 = FUNC_1(VAR_4) * sizeof(__u16);

 VAR_2 = FUNC_2(VAR_1, (unsigned char *) VAR_4, VAR_3);
 FUNC_3(VAR_4, 0, 129 * 2);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smd_channel {int dummy; } ;


 unsigned int FUNC_0 (struct smd_channel*,void**) ;
 int FUNC_1 (struct smd_channel*,unsigned int) ;
 int FUNC_2 (unsigned char*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct smd_channel *VAR_0, void *VAR_1, int VAR_2)
{
 void *VAR_3;
 unsigned VAR_4;
 unsigned char *VAR_5 = VAR_1;
 int VAR_6 = VAR_2;

 while (VAR_2 > 0) {
  VAR_4 = FUNC_0(VAR_0, &VAR_3);
  if (VAR_4 == 0)
   break;

  if (VAR_4 > VAR_2)
   VAR_4 = VAR_2;
  if (VAR_1)
   FUNC_2(VAR_5, VAR_3, VAR_4);

  VAR_5 += VAR_4;
  VAR_2 -= VAR_4;
  FUNC_1(VAR_0, VAR_4);
 }

 return VAR_6 - VAR_2;
}

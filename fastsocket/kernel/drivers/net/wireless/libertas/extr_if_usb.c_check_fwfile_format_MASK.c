
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fwheader {int datalength; int dnldcmd; } ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const uint8_t *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = 1;
 VAR_3 = VAR_6 = 0;

 do {
  struct fwheader *VAR_8 = (void *)VAR_0;

  VAR_2 = FUNC_2(VAR_8->dnldcmd);
  VAR_4 = FUNC_2(VAR_8->datalength);
  switch (VAR_2) {
  case 129:
   VAR_5 = sizeof(struct fwheader) + VAR_4;
   VAR_0 += VAR_5;
   VAR_6 += VAR_5;
   if (VAR_6 >= VAR_1)
    VAR_3 = 1;
   break;
  case 128:
   VAR_3 = 1;
   VAR_7 = 0;
   break;
  default:
   VAR_3 = 1;
   break;
  }
 } while (!VAR_3);

 if (VAR_7)
  FUNC_1("firmware file format check FAIL\n");
 else
  FUNC_0("firmware file format check PASS\n");

 return VAR_7;
}

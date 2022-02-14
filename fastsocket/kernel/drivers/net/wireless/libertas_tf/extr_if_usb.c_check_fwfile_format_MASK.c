
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fwheader {int datalength; int dnldcmd; } ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = 1;
 VAR_3 = VAR_6 = 0;

 do {
  struct fwheader *VAR_8 = (void *) VAR_0;

  VAR_2 = FUNC_1(VAR_8->dnldcmd);
  VAR_4 = FUNC_1(VAR_8->datalength);
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
  FUNC_2("firmware file format check FAIL\n");
 else
  FUNC_0("firmware file format check PASS\n");

 return VAR_7;
}

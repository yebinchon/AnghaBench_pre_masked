
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int ecces; } ;
struct mem_ctl_info {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static int
FUNC_2(const struct mem_ctl_info *VAR_0,
      const struct ppc4xx_ecc_status *VAR_1,
      char *VAR_2,
      size_t VAR_3)
{
 int VAR_4, VAR_5 = 0;
 unsigned int VAR_6, VAR_7;
 const unsigned int VAR_8 = 0;
 const unsigned int VAR_9 = 16;

 VAR_4 = FUNC_1(VAR_2, VAR_3, "; Byte Lane Errors: ");

 if (VAR_4 < 0 || VAR_4 >= VAR_3)
  goto fail;

 VAR_2 += VAR_4;
 VAR_3 -= VAR_4;
 VAR_5 += VAR_4;

 for (VAR_7 = 0, VAR_6 = VAR_8; VAR_6 < VAR_9; VAR_6++) {
  if ((VAR_1->ecces & FUNC_0(VAR_6)) != 0) {
   VAR_4 = FUNC_1(VAR_2, VAR_3,
         "%s%u",
         (VAR_7++ ? ", " : ""), VAR_6);

   if (VAR_4 < 0 || VAR_4 >= VAR_3)
    goto fail;

   VAR_2 += VAR_4;
   VAR_3 -= VAR_4;
   VAR_5 += VAR_4;
  }
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3, "%s; ", VAR_7 ? "" : "None");

 if (VAR_4 < 0 || VAR_4 >= VAR_3)
  goto fail;

 VAR_2 += VAR_4;
 VAR_3 -= VAR_4;
 VAR_5 += VAR_4;

 fail:
 return VAR_5;
}

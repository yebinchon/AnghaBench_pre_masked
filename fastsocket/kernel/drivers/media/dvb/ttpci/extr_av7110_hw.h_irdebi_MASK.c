
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct av7110 {int debi_virt; } ;


 int FUNC_0 (struct av7110*,int ,int,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static inline u32 FUNC_2(struct av7110 *VAR_0, u32 VAR_1, int VAR_2, u32 VAR_3, int VAR_4)
{
 u32 VAR_5;

 VAR_5=FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_4<=4)
  FUNC_1(VAR_0->debi_virt, (char *) &VAR_5, VAR_4);
 return VAR_5;
}

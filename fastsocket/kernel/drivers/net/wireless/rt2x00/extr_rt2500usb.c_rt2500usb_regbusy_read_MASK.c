
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_field16 {int dummy; } ;
struct rt2x00_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2x00_dev*,unsigned int const,int *) ;
 int FUNC_1 (struct rt2x00_dev*,char*,unsigned int const,int ) ;
 int FUNC_2 (int ,struct rt2x00_field16) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rt2x00_dev *VAR_2,
      const unsigned int VAR_3,
      struct rt2x00_field16 VAR_4,
      u16 *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_2, VAR_3, VAR_5);
  if (!FUNC_2(*VAR_5, VAR_4))
   return 1;
  FUNC_3(VAR_1);
 }

 FUNC_1(VAR_2, "Indirect register access failed: offset=0x%.08x, value=0x%.08x\n",
     VAR_3, *VAR_5);
 *VAR_5 = ~0;

 return 0;
}

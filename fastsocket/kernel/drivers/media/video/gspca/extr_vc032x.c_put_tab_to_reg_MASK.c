
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int const,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
   const u8 *VAR_1, u8 VAR_2, u16 VAR_3)
{
 int VAR_4;
 u16 VAR_5 = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0, 0xa0, VAR_1[VAR_4], VAR_5++);
}

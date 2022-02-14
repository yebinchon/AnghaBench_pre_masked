
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int exposure; scalar_t__ aec; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;

 if (VAR_1->aec)
  return;







 VAR_2 = VAR_1->exposure;
 FUNC_0(VAR_0, 0x08, VAR_2 >> 7);
 FUNC_0(VAR_0, 0x10, VAR_2 << 1);
}

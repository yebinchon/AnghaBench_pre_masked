
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int *) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int *) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4;
 __u8 VAR_5[4];

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = -1;
 for (VAR_3 = 0; VAR_3 < 256 && VAR_4 < 2; VAR_3++)
  VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 != 2) {
  FUNC_0("long command status read error %d", VAR_4);
  return (VAR_4 < 0) ? VAR_4 : -VAR_0;
 }

 FUNC_1(VAR_5, 0, 4);
 VAR_4 = FUNC_4(VAR_1, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;



 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}

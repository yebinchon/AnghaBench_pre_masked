
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_4,
       __u16 VAR_5, __u16 VAR_6, __u16 VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_0, "reg write: [0x%02x] = 0x%02x", VAR_6, VAR_7);
 VAR_8 = FUNC_2(VAR_4->dev,
   FUNC_3(VAR_4->dev, 0),
   VAR_5,
   VAR_1 | VAR_3 | VAR_2,
   VAR_7, VAR_6, ((void*)0), 0, 500);
 if (VAR_8 < 0)
  FUNC_1("reg write: error %d", VAR_8);
 return VAR_8;
}

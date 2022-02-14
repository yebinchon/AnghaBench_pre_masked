
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct vio_dev *VAR_2)
{
 int VAR_3 = VAR_2->unit_address;

 FUNC_1(VAR_1, FUNC_0(VAR_0, VAR_3 | 0x80));
 FUNC_1(VAR_1, FUNC_0(VAR_0, VAR_3));
 return 0;
}

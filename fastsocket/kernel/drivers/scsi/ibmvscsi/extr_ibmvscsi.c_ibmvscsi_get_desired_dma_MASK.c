
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union viosrp_iu {int dummy; } viosrp_iu ;
struct vio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned long FUNC_0(struct vio_dev *VAR_3)
{

 unsigned long VAR_4 = VAR_2 * sizeof(union viosrp_iu);


 VAR_4 += (VAR_1 * 512 *
                      VAR_0);

 return VAR_4;
}

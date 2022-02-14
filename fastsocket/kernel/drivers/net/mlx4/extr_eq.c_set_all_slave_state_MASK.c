
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_dev {int num_slaves; } ;
typedef enum slave_port_gen_event { ____Placeholder_slave_port_gen_event } slave_port_gen_event ;


 int FUNC_0 (struct mlx4_dev*,int,int ,int,int*) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_0, u8 VAR_1, int VAR_2)
{
 int VAR_3;
 enum slave_port_gen_event VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_slaves; VAR_3++)
  FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2, &VAR_4);
}

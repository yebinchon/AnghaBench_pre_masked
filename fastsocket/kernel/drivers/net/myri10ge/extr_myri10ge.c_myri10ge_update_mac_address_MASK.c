
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct myri10ge_priv {int dummy; } ;
struct myri10ge_cmd {int data0; int data1; } ;


 int VAR_0 ;
 int FUNC_0 (struct myri10ge_priv*,int ,struct myri10ge_cmd*,int ) ;

__attribute__((used)) static int FUNC_1(struct myri10ge_priv *VAR_1, u8 * VAR_2)
{
 struct myri10ge_cmd VAR_3;
 int VAR_4;

 VAR_3.data0 = ((VAR_2[0] << 24) | (VAR_2[1] << 16)
       | (VAR_2[2] << 8) | VAR_2[3]);

 VAR_3.data1 = ((VAR_2[4] << 8) | (VAR_2[5]));

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3, 0);
 return VAR_4;
}

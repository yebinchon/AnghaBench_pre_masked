
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct mlx4_en_priv {int loopback_ok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct mlx4_en_priv *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++) {
  if (*(VAR_3->data + VAR_5) != (unsigned char) (VAR_4 & 0xff))
   goto out_loopback;
 }

 VAR_2->loopback_ok = 1;

out_loopback:
 FUNC_0(VAR_3);
}

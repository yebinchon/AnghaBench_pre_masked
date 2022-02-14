
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {int search_mode; int fec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stv090x_state*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_3)
{
 switch (VAR_3->search_mode) {
 case 130:
  if (FUNC_0(VAR_3, VAR_0, 0x10) < 0)
   goto err;
  if (FUNC_0(VAR_3, VAR_2, 0x3f) < 0)
   goto err;
  break;
 case 128:
  if (FUNC_0(VAR_3, VAR_0, 0x00) < 0)
   goto err;
  switch (VAR_3->fec) {
  case 136:
   if (FUNC_0(VAR_3, VAR_2, 0x01) < 0)
    goto err;
   break;

  case 135:
   if (FUNC_0(VAR_3, VAR_2, 0x02) < 0)
    goto err;
   break;

  case 134:
   if (FUNC_0(VAR_3, VAR_2, 0x04) < 0)
    goto err;
   break;

  case 133:
   if (FUNC_0(VAR_3, VAR_2, 0x08) < 0)
    goto err;
   break;

  case 131:
   if (FUNC_0(VAR_3, VAR_2, 0x20) < 0)
    goto err;
   break;

  default:
   if (FUNC_0(VAR_3, VAR_2, 0x2f) < 0)
    goto err;
   break;
  }
  break;
 case 129:
  if (FUNC_0(VAR_3, VAR_0, 0x80) < 0)
   goto err;
  switch (VAR_3->fec) {
  case 136:
   if (FUNC_0(VAR_3, VAR_2, 0x01) < 0)
    goto err;
   break;

  case 135:
   if (FUNC_0(VAR_3, VAR_2, 0x02) < 0)
    goto err;
   break;

  case 132:
   if (FUNC_0(VAR_3, VAR_2, 0x10) < 0)
    goto err;
   break;

  default:
   if (FUNC_0(VAR_3, VAR_2, 0x13) < 0)
    goto err;
   break;
  }
  break;
 default:
  break;
 }
 return 0;
err:
 FUNC_1(VAR_1, 1, "I/O error");
 return -1;
}

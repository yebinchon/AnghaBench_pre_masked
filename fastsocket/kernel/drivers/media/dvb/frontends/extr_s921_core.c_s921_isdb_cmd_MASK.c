
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s921_isdb_t {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct s921_isdb_t*,void*) ;
 int FUNC_2 (struct s921_isdb_t*) ;
 int FUNC_3 (struct s921_isdb_t*,void*) ;
 int FUNC_4 (struct s921_isdb_t*,void*) ;

int FUNC_5(struct s921_isdb_t *VAR_1, u32 VAR_2, void *VAR_3) {
 switch(VAR_2) {
 case 130:
  FUNC_2(VAR_1);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_3);
  break;
 case 128:
  FUNC_4(VAR_1, VAR_3);
  break;
 case 131:
  FUNC_1(VAR_1, VAR_3);
  break;
 default:
  FUNC_0("unhandled command\n");
  return -VAR_0;
 }
 return 0;
}

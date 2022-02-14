
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nw_search_sequence {size_t volNumber; } ;
struct ncp_server {char* name_space; int ncp_reply_size; } ;
struct ncp_reply_header {int dummy; } ;


 int FUNC_0 (char*) ;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nw_search_sequence*,char*,int) ;
 int FUNC_4 (struct ncp_server*,char) ;
 int FUNC_5 (struct ncp_server*,int ) ;
 int FUNC_6 (struct ncp_server*,struct nw_search_sequence*,int) ;
 int FUNC_7 (struct ncp_server*,int ) ;
 int FUNC_8 (struct ncp_server*) ;
 int FUNC_9 (struct ncp_server*,int,char*,size_t) ;
 int FUNC_10 (struct ncp_server*) ;

int FUNC_11(struct ncp_server *VAR_2,
      struct nw_search_sequence *VAR_3,
      int* VAR_4,
      int* VAR_5,
      char* VAR_6,
      size_t VAR_7,
      char** VAR_8,
      size_t* VAR_9)
{
 int VAR_10;

 FUNC_8(VAR_2);
 FUNC_4(VAR_2, 20);
 FUNC_4(VAR_2, VAR_2->name_space[VAR_3->volNumber]);
 FUNC_4(VAR_2, 0);
 FUNC_7(VAR_2, FUNC_2(0x8006));
 FUNC_5(VAR_2, VAR_1);
 FUNC_7(VAR_2, FUNC_2(32767));
 FUNC_6(VAR_2, VAR_3, 9);





 {
  FUNC_4(VAR_2, 2);
  FUNC_4(VAR_2, 0xff);
  FUNC_4(VAR_2, '*');
 }
 VAR_10 = FUNC_9(VAR_2, 87, VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_10(VAR_2);
  return VAR_10;
 }
 if (VAR_2->ncp_reply_size < 12) {
  FUNC_10(VAR_2);
  return 0xFF;
 }
 *VAR_9 = VAR_2->ncp_reply_size - 12;
 FUNC_10(VAR_2);
 VAR_6 = VAR_6 + sizeof(struct ncp_reply_header);
 *VAR_8 = VAR_6 + 12;
 *VAR_5 = FUNC_1(VAR_6 + 10);
 *VAR_4 = FUNC_0(VAR_6 + 9);
 FUNC_3(VAR_3, VAR_6, 9);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsocket {int conn; } ;
typedef size_t s32 ;


 int FUNC_0 (int ,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct netsocket* VAR_2 ;

__attribute__((used)) static struct netsocket* FUNC_1(s32 VAR_3)
{
 struct netsocket *VAR_4;
 if(VAR_3<0 || VAR_3>VAR_0) {
     FUNC_0(VAR_1, ("get_socket(%d): invalid\n", VAR_3));
  return ((void*)0);
 }
 VAR_4 = &VAR_2[VAR_3];
 if(!VAR_4->conn) {
     FUNC_0(VAR_1, ("get_socket(%d): no active\n", VAR_3));
  return ((void*)0);
 }

 return VAR_4;
}

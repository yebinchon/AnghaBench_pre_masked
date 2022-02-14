
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {size_t current_size; int * packet; } ;
typedef int __u16 ;
typedef int __be16 ;


 int FUNC_0 (struct ncp_server*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ncp_server *VAR_0, __u16 VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_2(FUNC_1(VAR_1), (__be16 *) (&(VAR_0->packet[VAR_0->current_size])));
 VAR_0->current_size += 2;
}

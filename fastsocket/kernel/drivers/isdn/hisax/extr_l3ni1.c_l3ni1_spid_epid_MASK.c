
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {scalar_t__* data; } ;
struct l3_process {int st; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct l3_process*,int ) ;

__attribute__((used)) static void FUNC_4( struct l3_process *VAR_3, u_char VAR_4, void *VAR_5 )
{
 struct sk_buff *VAR_6 = VAR_5;

 if ( VAR_6->data[ 1 ] == 0 )
  if ( VAR_6->data[ 3 ] == VAR_2 )
  {
   FUNC_0( &VAR_3->timer );
   FUNC_3( VAR_3, 0 );
   FUNC_2( VAR_3->st, VAR_1 | VAR_0, ((void*)0) );
  }
 FUNC_1( VAR_6);
}

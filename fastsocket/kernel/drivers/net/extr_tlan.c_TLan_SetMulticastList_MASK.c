
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int flags; int mc_count; int base_addr; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {struct dev_mc_list* next; int dmi_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct net_device*,int,char*) ;

__attribute__((used)) static void FUNC_5( struct net_device *VAR_6 )
{
 struct dev_mc_list *VAR_7 = VAR_6->mc_list;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 if ( VAR_6->flags & VAR_1 ) {
  VAR_12 = FUNC_0( VAR_6->base_addr, VAR_4 );
  FUNC_2( VAR_6->base_addr,
    VAR_4, VAR_12 | VAR_5 );
 } else {
  VAR_12 = FUNC_0( VAR_6->base_addr, VAR_4 );
  FUNC_2( VAR_6->base_addr,
    VAR_4, VAR_12 & ~VAR_5 );
  if ( VAR_6->flags & VAR_0 ) {
   for ( VAR_10 = 0; VAR_10 < 3; VAR_10++ )
    FUNC_4( VAR_6, VAR_10 + 1, ((void*)0) );
   FUNC_1( VAR_6->base_addr, VAR_2, 0xFFFFFFFF );
   FUNC_1( VAR_6->base_addr, VAR_3, 0xFFFFFFFF );
  } else {
   for ( VAR_10 = 0; VAR_10 < VAR_6->mc_count; VAR_10++ ) {
    if ( VAR_10 < 3 ) {
     FUNC_4( VAR_6, VAR_10 + 1,
           (char *) &VAR_7->dmi_addr );
    } else {
     VAR_11 = FUNC_3( (u8 *) &VAR_7->dmi_addr );
     if ( VAR_11 < 32 )
      VAR_8 |= ( 1 << VAR_11 );
     else
      VAR_9 |= ( 1 << ( VAR_11 - 32 ) );
    }
    VAR_7 = VAR_7->next;
   }
   for ( ; VAR_10 < 3; VAR_10++ )
    FUNC_4( VAR_6, VAR_10 + 1, ((void*)0) );
   FUNC_1( VAR_6->base_addr, VAR_2, VAR_8 );
   FUNC_1( VAR_6->base_addr, VAR_3, VAR_9 );
  }
 }

}

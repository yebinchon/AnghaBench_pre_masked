
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ide_port_info {int dummy; } ;
typedef int ide_hwif_t ;
typedef int dbdev_tab_t ;
struct TYPE_3__ {void* rx_chan; void* tx_chan; void* rx_desc_head; void* tx_desc_head; void* rx_dev_id; void* tx_dev_id; } ;
typedef TYPE_1__ _auide_hwif ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*,void*,int *,void*) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *) ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (int *,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(ide_hwif_t *VAR_7, const struct ide_port_info *VAR_8)
{
 _auide_hwif *VAR_9 = &VAR_6;
 dbdev_tab_t VAR_10;
 int VAR_11;




 VAR_11 = VAR_3;



 FUNC_4( &VAR_10,
         (u32)VAR_4,
         8, 32, VAR_2 | VAR_11);
  VAR_9->tx_dev_id = FUNC_3( &VAR_10 );

 FUNC_4( &VAR_10,
         (u32)VAR_4,
         8, 32, VAR_1 | VAR_11);
  VAR_9->rx_dev_id = FUNC_3( &VAR_10 );


 VAR_9->tx_chan = FUNC_0(VAR_4,
       VAR_9->tx_dev_id,
       ((void*)0),
       (void*)VAR_9);


 VAR_9->rx_chan = FUNC_0(VAR_9->rx_dev_id,
       VAR_4,
       ((void*)0),
       (void*)VAR_9);

 VAR_9->tx_desc_head = (void*)FUNC_1(VAR_9->tx_chan,
            VAR_5);
 VAR_9->rx_desc_head = (void*)FUNC_1(VAR_9->rx_chan,
            VAR_5);

 FUNC_2( VAR_9->tx_chan );
 FUNC_2( VAR_9->rx_chan );

 return 0;
}

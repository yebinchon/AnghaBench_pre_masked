
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_rx_le {scalar_t__ ctrl; } ;
struct sky2_port {int rx_put; struct sky2_rx_le* rx_le; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct sky2_rx_le *FUNC_1(struct sky2_port *VAR_1)
{
 struct sky2_rx_le *VAR_2 = VAR_1->rx_le + VAR_1->rx_put;
 VAR_1->rx_put = FUNC_0(VAR_1->rx_put, VAR_0);
 VAR_2->ctrl = 0;
 return VAR_2;
}

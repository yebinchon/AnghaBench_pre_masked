
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {int pio_active; scalar_t__ pio_count; scalar_t__ pio_bytes; scalar_t__ pio_sgptr; } ;
struct mmc_data {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct s3cmci_host*) ;
 int FUNC_2 (struct s3cmci_host*,int) ;

__attribute__((used)) static int FUNC_3(struct s3cmci_host *VAR_7, struct mmc_data *VAR_8)
{
 int VAR_9 = (VAR_8->flags & VAR_1) ? 1 : 0;

 FUNC_0((VAR_8->flags & VAR_0) == VAR_0);

 VAR_7->pio_sgptr = 0;
 VAR_7->pio_bytes = 0;
 VAR_7->pio_count = 0;
 VAR_7->pio_active = VAR_9 ? VAR_6 : VAR_5;

 if (VAR_9) {
  FUNC_1(VAR_7);
  FUNC_2(VAR_7, VAR_4);
 } else {
  FUNC_2(VAR_7, VAR_2
        | VAR_3);
 }

 return 0;
}

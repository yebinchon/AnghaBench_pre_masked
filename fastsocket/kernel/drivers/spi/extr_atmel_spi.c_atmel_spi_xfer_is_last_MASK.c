
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int transfer_list; } ;
struct TYPE_2__ {int * prev; } ;
struct spi_message {TYPE_1__ transfers; } ;



__attribute__((used)) static inline int FUNC_0(struct spi_message *VAR_0,
     struct spi_transfer *VAR_1)
{
 return VAR_0->transfers.prev == &VAR_1->transfer_list;
}

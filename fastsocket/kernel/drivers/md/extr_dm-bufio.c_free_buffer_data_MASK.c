
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int pages_per_block_bits; } ;
typedef enum data_mode { ____Placeholder_data_mode } data_mode ;


 int FUNC_0 () ;



 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct dm_bufio_client*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(struct dm_bufio_client *VAR_0,
        void *VAR_1, enum data_mode VAR_2)
{
 switch (VAR_2) {
 case 129:
  FUNC_4(FUNC_2(VAR_0), VAR_1);
  break;

 case 130:
  FUNC_3((unsigned long)VAR_1, VAR_0->pages_per_block_bits);
  break;

 case 128:
  FUNC_5(VAR_1);
  break;

 default:
  FUNC_1("dm_bufio_free_buffer_data: bad data mode: %d",
         VAR_2);
  FUNC_0();
 }
}

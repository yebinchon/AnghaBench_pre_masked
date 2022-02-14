
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * transfer_buffer; } ;
struct mon_reader_bin {int dummy; } ;


 int FUNC_0 (struct mon_reader_bin const*,unsigned int,int *,unsigned int) ;

__attribute__((used)) static char FUNC_1(const struct mon_reader_bin *VAR_0,
    unsigned int VAR_1, struct urb *VAR_2, unsigned int VAR_3)
{

 if (VAR_2->transfer_buffer == ((void*)0))
  return 'Z';
 FUNC_0(VAR_0, VAR_1, VAR_2->transfer_buffer, VAR_3);
 return 0;
}

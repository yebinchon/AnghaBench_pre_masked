
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned int recv_bulk_pipe; unsigned int send_bulk_pipe; scalar_t__ extra; } ;
struct sddr55_card_info {int last_access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct us_data*,unsigned int,unsigned char*,unsigned int,int *) ;

__attribute__((used)) static int
FUNC_1(struct us_data *VAR_3, int VAR_4,
        unsigned char *VAR_5, unsigned int VAR_6) {
 struct sddr55_card_info *VAR_7 = (struct sddr55_card_info *)VAR_3->extra;
 unsigned int VAR_8 = (VAR_4 == VAR_0) ?
   VAR_3->recv_bulk_pipe : VAR_3->send_bulk_pipe;

 if (!VAR_6)
  return VAR_1;
 VAR_7->last_access = VAR_2;
 return FUNC_0(VAR_3, VAR_8, VAR_5, VAR_6, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fw_rss_ind_tbl_cmd {void* startidx; void* niqid; int iq0_to_iq2; void* retval_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int cmd ;
typedef int __be32 ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (struct fw_rss_ind_tbl_cmd) ;
 int VAR_2 ;
 unsigned int FUNC_2 (int const) ;
 unsigned int FUNC_3 (int const) ;
 unsigned int FUNC_4 (int const) ;
 unsigned int FUNC_5 (unsigned int) ;
 void* FUNC_6 (unsigned int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct fw_rss_ind_tbl_cmd*,int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct adapter*,int,struct fw_rss_ind_tbl_cmd*,int,int *) ;

int FUNC_11(struct adapter *VAR_3, int VAR_4, unsigned int VAR_5,
   int VAR_6, int VAR_7, const u16 *VAR_8, unsigned int VAR_9)
{
 int VAR_10;
 const u16 *VAR_11 = VAR_8;
 const u16 *VAR_12 = VAR_8 + VAR_9;
 struct fw_rss_ind_tbl_cmd VAR_13;

 FUNC_8(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.op_to_viid = FUNC_6(FUNC_0(VAR_2) |
          VAR_0 | VAR_1 |
          FUNC_5(VAR_5));
 VAR_13.retval_len16 = FUNC_6(FUNC_1(VAR_13));


 while (VAR_7 > 0) {
  int VAR_14 = FUNC_9(VAR_7, 32);
  __be32 *VAR_15 = &VAR_13.iq0_to_iq2;

  VAR_13.niqid = FUNC_7(VAR_14);
  VAR_13.startidx = FUNC_7(VAR_6);

  VAR_6 += VAR_14;
  VAR_7 -= VAR_14;

  while (VAR_14 > 0) {
   unsigned int VAR_16;

   VAR_16 = FUNC_2(*VAR_11);
   if (++VAR_11 >= VAR_12)
    VAR_11 = VAR_8;
   VAR_16 |= FUNC_3(*VAR_11);
   if (++VAR_11 >= VAR_12)
    VAR_11 = VAR_8;
   VAR_16 |= FUNC_4(*VAR_11);
   if (++VAR_11 >= VAR_12)
    VAR_11 = VAR_8;

   *VAR_15++ = FUNC_6(VAR_16);
   VAR_14 -= 3;
  }

  VAR_10 = FUNC_10(VAR_3, VAR_4, &VAR_13, sizeof(VAR_13), ((void*)0));
  if (VAR_10)
   return VAR_10;
 }
 return 0;
}

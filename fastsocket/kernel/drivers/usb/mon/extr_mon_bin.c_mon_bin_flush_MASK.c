
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_reader_bin {int fetch_lock; scalar_t__ b_read; int b_lock; int b_out; } ;
struct mon_bin_hdr {scalar_t__ len_cap; } ;


 struct mon_bin_hdr* FUNC_0 (struct mon_reader_bin*,int ) ;
 scalar_t__ FUNC_1 (struct mon_reader_bin*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct mon_reader_bin*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct mon_reader_bin *VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3;
 struct mon_bin_hdr *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_1->fetch_lock);
 FUNC_5(&VAR_1->b_lock, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (FUNC_1(VAR_1))
   break;

  VAR_4 = FUNC_0(VAR_1, VAR_1->b_out);
  FUNC_2(VAR_1, VAR_0 + VAR_4->len_cap);
 }
 FUNC_6(&VAR_1->b_lock, VAR_3);
 VAR_1->b_read = 0;
 FUNC_4(&VAR_1->fetch_lock);
 return VAR_5;
}

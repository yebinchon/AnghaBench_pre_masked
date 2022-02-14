
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_reader_bin {int dummy; } ;
struct mon_bin_hdr {char type; scalar_t__ len_cap; } ;


 struct mon_bin_hdr* FUNC_0 (struct mon_reader_bin const*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mon_bin_hdr*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct mon_reader_bin *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 struct mon_bin_hdr *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_4, 0, VAR_0);
 VAR_4->type = '@';
 VAR_4->len_cap = VAR_3 - VAR_0;
}

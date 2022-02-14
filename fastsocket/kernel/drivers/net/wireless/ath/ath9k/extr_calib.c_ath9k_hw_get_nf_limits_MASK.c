
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_nf_limits {int dummy; } ;
struct ath_hw {struct ath_nf_limits nf_5g; struct ath_nf_limits nf_2g; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath9k_channel*) ;

__attribute__((used)) static struct ath_nf_limits *FUNC_1(struct ath_hw *VAR_0,
          struct ath9k_channel *VAR_1)
{
 struct ath_nf_limits *VAR_2;

 if (!VAR_1 || FUNC_0(VAR_1))
  VAR_2 = &VAR_0->nf_2g;
 else
  VAR_2 = &VAR_0->nf_5g;

 return VAR_2;
}

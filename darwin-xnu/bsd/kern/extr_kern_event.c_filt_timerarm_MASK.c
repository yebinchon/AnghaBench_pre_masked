
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_call_t ;
struct knote {int kn_sfflags; scalar_t__ kn_hook; int kn_hookid; int * kn_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (int ,int *,int ,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_12)
{
 uint64_t VAR_13 = VAR_12->kn_ext[0];
 uint64_t VAR_14 = VAR_12->kn_ext[1];

 int VAR_15 = VAR_12->kn_sfflags;
 unsigned int VAR_16 = 0;

 FUNC_0(FUNC_1(&VAR_12->kn_hookid, VAR_11) == VAR_10);

 if (VAR_15 & VAR_1)
  VAR_16 |= VAR_7;
 else if (VAR_15 & VAR_0)
  VAR_16 |= VAR_6;
 else
  VAR_16 |= VAR_8;

 if (VAR_15 & VAR_2)
  VAR_16 |= VAR_5;

 if (VAR_15 & VAR_3)
  VAR_16 |= VAR_4;

 FUNC_2(&VAR_12->kn_hookid, VAR_9, VAR_11);
 FUNC_3((thread_call_t)VAR_12->kn_hook, ((void*)0),
   VAR_13, VAR_14, VAR_16);
}

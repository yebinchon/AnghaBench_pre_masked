
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int unicode_xlate; scalar_t__ utf8; } ;
struct msdos_sb_info {int nls_io; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int const*,int,int ,int ) ;
 int FUNC_1 (int const*,int ,int ,unsigned char*,int) ;

__attribute__((used)) static inline int FUNC_2(struct msdos_sb_info *VAR_2, const wchar_t *VAR_3,
    unsigned char *VAR_4, int VAR_5)
{
 if (VAR_2->options.utf8)
  return FUNC_1(VAR_3, VAR_0,
    VAR_1, VAR_4, VAR_5);
 else
  return FUNC_0(VAR_4, VAR_3, VAR_5, VAR_2->options.unicode_xlate,
       VAR_2->nls_io);
}

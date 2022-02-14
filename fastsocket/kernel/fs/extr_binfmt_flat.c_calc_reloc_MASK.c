
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lib_info {TYPE_1__* lib_list; } ;
struct TYPE_5__ {int comm; } ;
struct TYPE_4__ {scalar_t__ build_date; unsigned long start_brk; unsigned long start_data; unsigned long start_code; unsigned long text_len; int loaded; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,struct lib_info*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static unsigned long
FUNC_5(unsigned long VAR_4, struct lib_info *VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 VAR_9 = 0;


 VAR_10 = VAR_5->lib_list[VAR_9].start_brk;
 VAR_11 = VAR_5->lib_list[VAR_9].start_data;
 VAR_13 = VAR_5->lib_list[VAR_9].start_code;
 VAR_12 = VAR_5->lib_list[VAR_9].text_len;

 if (!FUNC_1(VAR_4, VAR_10 - VAR_11 + VAR_12)) {
  FUNC_3("BINFMT_FLAT: reloc outside program 0x%x (0 - 0x%x/0x%x)",
         (int) VAR_4,(int)(VAR_10-VAR_13),(int)VAR_12);
  goto failed;
 }

 if (VAR_4 < VAR_12)
  VAR_8 = VAR_4 + VAR_13;
 else
  VAR_8 = VAR_4 - VAR_12 + VAR_11;


 return(VAR_8);

failed:
 FUNC_3(", killing %s!\n", VAR_3->comm);
 FUNC_4(VAR_2, VAR_3, 0);

 return VAR_1;
}

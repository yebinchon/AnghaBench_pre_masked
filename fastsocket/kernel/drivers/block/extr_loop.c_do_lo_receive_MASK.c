
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct lo_read_data* data; } ;
struct splice_desc {TYPE_1__ u; int pos; scalar_t__ flags; int total_len; scalar_t__ len; } ;
struct loop_device {struct file* lo_backing_file; } ;
struct lo_read_data {int bsize; int offset; int page; struct loop_device* lo; } ;
struct file {int dummy; } ;
struct bio_vec {int bv_len; int bv_offset; int bv_page; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct splice_desc*,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct loop_device *VAR_1,
       struct bio_vec *VAR_2, int VAR_3, loff_t VAR_4)
{
 struct lo_read_data VAR_5;
 struct splice_desc VAR_6;
 struct file *VAR_7;
 ssize_t VAR_8;

 VAR_5.lo = VAR_1;
 VAR_5.page = VAR_2->bv_page;
 VAR_5.offset = VAR_2->bv_offset;
 VAR_5.bsize = VAR_3;

 VAR_6.len = 0;
 VAR_6.total_len = VAR_2->bv_len;
 VAR_6.flags = 0;
 VAR_6.pos = VAR_4;
 VAR_6.u.data = &VAR_5;

 VAR_7 = VAR_1->lo_backing_file;
 VAR_8 = FUNC_0(VAR_7, &VAR_6, VAR_0);

 return VAR_8;
}

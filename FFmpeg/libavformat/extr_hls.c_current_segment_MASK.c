
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment {int dummy; } ;
struct playlist {size_t cur_seq_no; size_t start_seq_no; struct segment** segments; } ;



__attribute__((used)) static struct segment *FUNC_0(struct playlist *VAR_0)
{
    return VAR_0->segments[VAR_0->cur_seq_no - VAR_0->start_seq_no];
}

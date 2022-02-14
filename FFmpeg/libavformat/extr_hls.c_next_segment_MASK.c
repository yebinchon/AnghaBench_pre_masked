
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment {int dummy; } ;
struct playlist {int cur_seq_no; int start_seq_no; int n_segments; struct segment** segments; } ;



__attribute__((used)) static struct segment *FUNC_0(struct playlist *VAR_0)
{
    int VAR_1 = VAR_0->cur_seq_no - VAR_0->start_seq_no + 1;
    if (VAR_1 >= VAR_0->n_segments)
        return ((void*)0);
    return VAR_0->segments[VAR_1];
}

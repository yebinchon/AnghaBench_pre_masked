
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct color_rect {int* max; int* min; } ;
struct color_node {int split; int palette_id; int* val; int left_id; int right_id; } ;


 int FUNC_0 (int*,int const*,int const,int*,struct color_rect const*) ;

__attribute__((used)) static int FUNC_1(struct color_node *VAR_0,
                           uint8_t *VAR_1,
                           int *VAR_2,
                           const uint32_t *VAR_3,
                           const int VAR_4,
                           const struct color_rect *VAR_5)
{
    uint32_t VAR_6;
    int VAR_7, VAR_8;
    int VAR_9 = -1, VAR_10 = -1;
    struct color_node *VAR_11;
    struct color_rect VAR_12, VAR_13;
    const int VAR_14 = FUNC_0(VAR_1, VAR_3, VAR_4, &VAR_7, VAR_5);

    if (VAR_14 < 0)
        return -1;


    VAR_8 = (*VAR_2)++;
    VAR_6 = VAR_3[VAR_14];
    VAR_11 = &VAR_0[VAR_8];
    VAR_11->split = VAR_7;
    VAR_11->palette_id = VAR_14;
    VAR_11->val[0] = VAR_6>>24 & 0xff;
    VAR_11->val[1] = VAR_6>>16 & 0xff;
    VAR_11->val[2] = VAR_6>> 8 & 0xff;
    VAR_11->val[3] = VAR_6 & 0xff;

    VAR_1[VAR_14] = 1;


    VAR_12 = VAR_13 = *VAR_5;
    VAR_12[VAR_7-1] = VAR_11->val[VAR_7];
    VAR_13[VAR_7-1] = VAR_11->val[VAR_7] + 1;

    VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_12);

    if (VAR_13[VAR_7-1] <= VAR_13[VAR_7-1])
        VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_13);

    VAR_11->left_id = VAR_9;
    VAR_11->right_id = VAR_10;

    return VAR_8;
}
